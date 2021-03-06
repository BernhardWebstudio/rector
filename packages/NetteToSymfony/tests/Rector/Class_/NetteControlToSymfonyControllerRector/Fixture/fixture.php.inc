<?php

namespace Rector\NetteToSymfony\Tests\Rector\Class_\NetteControlToSymfonyControllerRector\Fixture;

use Rector\NetteToSymfony\Tests\Rector\Class_\NetteControlToSymfonyControllerRector\Source\NetteControl;

class SomeControl extends NetteControl
{
    public function render()
    {
        $this->template->param = 'some value';
        $this->template->render(__DIR__ . '/poll.latte');
    }
}

?>
-----
<?php

namespace Rector\NetteToSymfony\Tests\Rector\Class_\NetteControlToSymfonyControllerRector\Fixture;

use Rector\NetteToSymfony\Tests\Rector\Class_\NetteControlToSymfonyControllerRector\Source\NetteControl;

class SomeController extends \Symfony\Bundle\FrameworkBundle\Controller\AbstractController
{
    public function action()
    {
        $this->render(__DIR__ . '/poll.latte', ['param' => 'some value']);
    }
}

?>
